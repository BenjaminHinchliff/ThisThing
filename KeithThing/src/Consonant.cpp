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
    m_voicing{ voicing },
    m_aspiration{ aspiration },
    m_labialization{ labialization },
    m_palatalization{ palatalization },
    m_ejective{ ejective }
{
    // if not existing add places and manners to their respective variables
    if (m_possible_places.size() == 0 || m_possible_manners.size() == 0)
    {
        m_possible_places = read_file_to_vector("../data/places.articulation");
        m_possible_manners = read_file_to_vector("../data/manners.articulation");
    }

    // test if placing is one of the options & throw error if not
    if (
        std::find(m_possible_places.begin(), m_possible_places.end(), place)
        != m_possible_places.end()
        )
        m_place = place;
    else
        throw "invalid place";

    // test if voicing is one of the options & throw error if not
    if (
        std::find(m_possible_manners.begin(), m_possible_manners.end(), place)
        != m_possible_manners.end()
        )
        m_manner = manner;
    else
        throw "invalid voicing";

}

bool Consonant::is_pronounceable() const
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

std::vector<std::string> Consonant::read_file_to_vector(const char* file_path)
{
    std::ifstream file{ file_path };
    if (!file)
        throw "unable to open file";

    std::vector<std::string> vec{};
    while (!file.eof())
    {
        std::string line;
        std::getline(file, line);
        vec.push_back(line);
    }

    return vec;
}