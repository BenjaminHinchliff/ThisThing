#include "Consonant.h"

Consonant::Consonant(
    std::string place,
    std::string manner,
    bool voicing,
    bool aspiration,
    bool labialization,
    bool palatalization,
    bool ejective
) :
    m_place{ place },
    m_manner{ manner },
    m_voicing{ voicing },
    m_aspiration{ aspiration },
    m_labialization{ labialization },
    m_palatalization{ palatalization },
    m_ejective{ ejective }
{

}

bool Consonant::isPronounceable() const
{
    return true;
}

std::ostream& operator<<(std::ostream& out, const Consonant& phone)
{
    out << "Consonant{ "
        << phone.m_place << ", "
        << phone.m_manner << ", "
        << phone.m_voicing << ", "
        << phone.m_aspiration << ", "
        << phone.m_labialization << ", "
        << phone.m_palatalization << ", "
        << phone.m_ejective 
        << " }";
    return out;
}