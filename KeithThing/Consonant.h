#pragma once

#include <string>
#include <iostream>

class Consonant
{
public:
    Consonant(
        std::string place,
        std::string manner,
        bool voicing,
        bool aspiration = false,
        bool labialization = false,
        bool palatalization = false,
        bool ejective = false
    );

    bool isPronounceable() const;

    friend std::ostream& operator<<(std::ostream& out, const Consonant& phone);
private:
    std::string m_place = "";
    std::string m_manner = "";
    bool m_voicing = false;

    bool m_aspiration = false;
    bool m_labialization = false;
    bool m_palatalization = false;
    bool m_ejective = false;
};

