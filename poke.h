#include <bits/stdc++.h>

using namespace std;
class Pokemon{
public:
    int pID;
    string name;
    string type;
    string gender;
    int atk;
    int def;
    int spd;
    int spAtk;
    int spDef;
    Pokemon(Name name, Type type, Weight weight, Height height, Gender gender, dexNum dNum, Attack atk, Defence def, Speed spd, SpAttack spAtk, SpDefence spDef);
    Pokemon()=delete;

    Name name;
    Type type;
    Weight weight;
    Height height;
    Gender gender;
    dexNum dNum;

    enum class Types{
        Grass; Water; Fire; Ice; Poison; Electric; Ghost;
        Dark; Psychic; Dragon; Normal; Fighting;
        Ground; Flying; Rock; Steel; Bug; Fairy;
    };
    class multiType{
        multiType(Type type1);
        multiType(Type type1, Type type2);
        void addType2(Type);
        bool hasType(Type) const;
    };
    enum class Genders{
        Male; Female; Unknown;
    };
};


