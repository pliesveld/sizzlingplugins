
#include "PlayerClassTracker.h"

void CPlayerClassTracker::StartRecording( EPlayerClass player_class, uint64 curtime )
{
	// reset all the data
	m_timeplayed[0] = 0;
	m_timeplayed[1] = 0;
	m_timeplayed[2] = 0;
	m_timeplayed[3] = 0;
	m_timeplayed[4] = 0;
	m_timeplayed[5] = 0;
	m_timeplayed[6] = 0;
	m_timeplayed[7] = 0;
	m_timeplayed[8] = 0;
	m_lastUpdate = curtime;
	m_mostPlayedClass = 0;
	ResetFlags(m_currentClass);
}

void CPlayerClassTracker::PlayerChangedClass( EPlayerClass player_class, uint64 curtime )
{
	uint16 iPlayerClass = static_cast<uint16>(player_class);
	// if we are not getting double messages
	if (m_currentClass != iPlayerClass)
	{
		UpdateTimes(curtime);
		m_currentClass = player_class;
		FlagClassAsPlayed(player_class);
	}
}

void CPlayerClassTracker::UpdateTimes( uint64 curtime )
{
	if (IsTFClass(m_currentClass))
	{
		m_timeplayed[m_currentClass-1] += (curtime - m_lastUpdate);
		UpdateMostPlayedClass(curtime);
	}
	m_lastUpdate = curtime;
}

void CPlayerClassTracker::UpdateMostPlayedClass( uint64 curtime )
{
	if (IsTFClass(m_mostPlayedClass) && (m_mostPlayedClass != m_currentClass))
	{
		if (m_timeplayed[m_currentClass-1] >= m_timeplayed[m_mostPlayedClass-1])
		{
			m_mostPlayedClass = m_currentClass;
		}
	}
}

void CPlayerClassTracker::FlagClassAsPlayed( uint16 player_class )
{
	if (IsTFClass(player_class))
	{
		m_classflags |= ( 1 << (player_class-1) );
	}
}
