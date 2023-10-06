

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include "CustomerType.h"

class Customer
{
private:
        int _customer_id;
        std::string _customerName;
        CustomerType _ctype;
        int _cservice_credit;

public:
    Customer( int customer_id,std::string customerName, CustomerType ctype,int cservice_credit);
    Customer(Customer& obj)=default;

    ~Customer() {}

    int customerId() const { return _customer_id; }
    void setCustomerId(int customer_id) { _customer_id = customer_id; }

    std::string customerName() const { return _customerName; }
    void setCustomerName(const std::string &customerName) { _customerName = customerName; }

    CustomerType ctype() const { return _ctype; }
    void setCtype(const CustomerType &ctype) { _ctype = ctype; }

    int cserviceCredit() const { return _cservice_credit; }
    void setCserviceCredit(int cservice_credit) { _cservice_credit = cservice_credit; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

    
};
std::string DisplayEnum(const CustomerType value);


#endif // CUSTOMER_H
