#pragma once
#include <string>

#ifdef ANGLEDLL_EXPORTS
#define ANGLEDLL_API __declspec(dllexport)
#else
#define ANGLEDLL_API __declspec(dllimport)
#endif

class ANGLEDLL_API Angle {
private:
    int degrees;
    double minutes;
    void normalize();
public:
    Angle();
    Angle(int deg, double min);
    Angle(const Angle& other);
    ~Angle();

    bool Init(int deg, double min);
    void Read();
    void Display() const;
    std::string toString() const;
    double toRadians() const;
    double getSine() const;
    void add(const Angle& other);
    void subtract(const Angle& other);
    int compare(const Angle& other) const;
};