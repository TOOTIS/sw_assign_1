#ifndef STOCK20_MODIFIED
#define STOCK20_MODIFIED

#include <string>

class Stock
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock();
    // default constructor
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();
    // do-nothing destructor

    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    const Stock & topval(const Stock & s) const;

    const string & company() const;
    int shares() const;
    double share_val() const;
    double total_val() const;
    // Getters
};

#endif // STOCK20_MODIFIED

