
class Quads
{
private:
    string sym;
    string arg1;
    string arg2;
    string arg3;

public:
    Quads()
    {
        sym = "|--|";
        arg1 = "|--|";
        arg2 = "|--|";
        arg3 = "|--|";
    }

    Quads(string s)
    {
        sym = s;
        arg1 = "|--|";
        arg2 = "|--|";
        arg3 = "|--|";
    }

    Quads(string s1, string s2)
    {
        sym = s1;
        arg1 = s2;
        arg2 = "|--|";
        arg3 = "|--|";
    }

    Quads(string s1, string s2, string s3)
    {
        sym = s1;
        arg1 = s2;
        arg2 = s3;
        arg3 = "|--|";
    }

    Quads(string s1, string s2, string s3, string s4)
    {
        sym = s1;
        arg1 = s2;
        arg2 = s3;
        arg3 = s4;
    }

    string getSym()
    {
        return sym;
    }

    string getArg1()
    {
        return arg1;
    }

    string getArg2()
    {
        return arg2;
    }

    string getArg3()
    {
        return arg3;
    }

    void setSymbol(string s)
    {
        sym = s;
    }

    void setArg1(string s)
    {
        arg1 = s;
    }

    void setArg2(string s)
    {
        arg2 = s;
    }

    void setArg3(string s)
    {
        arg3 = s;
    }

    string toString()
    {
        return sym + " " + arg1 + " " + arg2 + " " + arg3;
    }
};
