
class Token
{

private:
    string tok;
    string cls;

public:
    Token()
    {
        tok = "";
        cls = "";
    }

    Token(string tok, string cls)
    {

        this->tok = tok;
        this->cls = cls;
    }

    string getToken()
    {
        return tok;
    }

    string getCls()
    {
        return cls;
    }

    void setToken(string t)
    {
        tok = t;
    }
    void setCls(string c)
    {
        cls = c;
    }

    string toString()
    {
        return tok + "\t\t" + cls + "\t\t";
    }

    void show()
    {
        cout << "Output of begin and end: ";
    }
};
