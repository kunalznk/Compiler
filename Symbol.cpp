
class Symbol
{

public:
    string tok;
    string cls;
    string value;
    string addr;
    string seg;

public:
    Symbol()
    {
        tok = " ";
        cls = " ";
        value = " ";
        addr = " ";
        seg = " ";
    }

    Symbol(string t, string c, string v, string a, string s)
    {

        tok = t;
        cls = c;
        value = v;
        addr = a;
        seg = s;
    }

    string toString()
    {
        if (cls.compare("<numLit>"))
        {
            return tok + "\t\t" + cls + "\t" + value + "\t\t" + addr + "\t\t" +
                   seg;
        }
        else
        {
            return tok + "\t\t" + cls + "\t\t" + value + "\t\t" + addr + "\t\t" +
                   seg;
        }
    }

public:
    void setToken(string t)
    {
        tok = t;
    }

    void setCls(string c)
    {
        cls = c;
    }

    void setValue(string v)
    {
        value = v;
    }

    void setAddress(string a)
    {
        addr = a;
    }

    void setSegment(string s)
    {
        seg = s;
    }

    string getToken()
    {
        return tok;
    }

    string getCls()
    {
        return cls;
    }

    string getValue()
    {
        return value;
    }

    string getAddress()
    {
        return addr;
    }

    string getSegment()
    {
        return seg;
    }

    // to string method for printing purposes
};
