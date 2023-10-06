#include"Customer.h"

Customer::Customer(int customer_id, std::string customerName, CustomerType ctype, int cservice_credit)
:_customer_id(customer_id), _customerName(customerName),_ctype(ctype),_cservice_credit(cservice_credit)
{
}


std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_customer_id: " << rhs._customer_id
       << " _customerName: " << rhs._customerName
       << " _ctype: " <<DisplayEnum(rhs._ctype)
       << " _cservice_credit: " << rhs._cservice_credit;
    return os;
}

std::string DisplayEnum(const CustomerType value)
{
    if(value==CustomerType::PREMIUM)
    {
        return "PREMIUM";
    }
    else if(value==CustomerType::REGULAR){
        return "REGULAR";

    }
    else{
        return "VIP";
    }
}
