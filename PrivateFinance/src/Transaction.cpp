#include "C:\Users\LENOVO\Documents\Github\keuangan\ManajemenKeuangan\PrivateFinance\include\Transaction.hpp" //merah karena di setiap laptop beda PATH-nya

Transaction::Transaction(int id, Type type, const std::string &date, double amount, const std::string &category, const std::string &description)
    : id_(id), type_(type), date_(date), amount_(amount), category_(category), description_(description) {}

int Transaction::getId() const { return id_; }
Transaction::Type Transaction::getType() const { return type_; }
const std::string& Transaction::getDate() const { return date_; }
double Transaction::getAmount() const { return amount_; }
const std::string& Transaction::getCategory() const { return category_; }
const std::string& Transaction::getDescription() const { return description_; }

void Transaction::setId(int id) { id_ = id; }

