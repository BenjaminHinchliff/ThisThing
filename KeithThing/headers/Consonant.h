#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

class Consonant
{
public:
    // primary constuctor
    Consonant(
        std::string place,
        std::string manner,
        bool voicing,
        bool aspiration = false,
        bool labialization = false,
        bool palatalization = false,
        bool ejective = false
    );

    // constuctor for C-strings
    Consonant(
        const char* place,
        const char* manner,
        bool voicing,
        bool aspiration = false,
        bool labialization = false,
        bool palatalization = false,
        bool ejective = false
    ) : Consonant(
        std::string{ place },
        std::string{ manner },
        voicing,
        aspiration,
        labialization,
        palatalization,
        ejective
    )
    {
    }

    // check if a consonant is possible to pronounce
    bool is_pronounceable() const;

    // debug output
    friend std::ostream& operator<<(std::ostream& out, const Consonant& phone);
private:
    static std::vector<std::string> m_possible_places;
    static std::vector<std::string> m_possible_manners;

    std::string m_place = "";
    std::string m_manner = "";
    bool m_voicing = false;

    bool m_aspiration = false;
    bool m_labialization = false;
    bool m_palatalization = false;
    bool m_ejective = false;

    std::vector<std::string> read_file_to_vector(const char* file_path);
};

