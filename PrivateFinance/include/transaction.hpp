#pragma once

#include <string>

// Represents a single financial transaction (income or expense)
class Transaction {
public:
    // Type of transaction: Income or Expense
    enum class Type { Income, Expense };

    // Constructors
    Transaction() = default;
    Transaction(int id, Type type, const std::string &date,
                double amount, const std::string &category,
                const std::string &description);

    // Getters
    int getId() const;
    Type getType() const;
    const std::string& getDate() const;
    double getAmount() const;
    const std::string& getCategory() const;
    const std::string& getDescription() const;

    // Setters
    void setId(int id);
    void setType(Type type);
    void setDate(const std::string &date);
    void setAmount(double amount);
    void setCategory(const std::string &category);
    void setDescription(const std::string &description);

private:
    int id_ = 0;                     // Unique identifier for the transaction
    Type type_ = Type::Expense;      // Income or Expense
    std::string date_;               // Format: YYYY-MM-DD
    double amount_ = 0.0;            // Transaction amount
    std::string category_;           // Category label (e.g., "Food", "Transport")
    std::string description_;        // Description/details of the transaction
};
