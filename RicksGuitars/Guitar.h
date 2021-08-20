/**
 * Based on examples in
 *     Head First Object-Oriented Analysis and Design
 *     by Brett D. McLaughlin, Gary Pollice, and David West
 *     O'Reilly, 2007
 *     ISBN 978-0-596-00867-3
 *
 * Ported from Java by
 *     Ronald Mak
 *     Department of Computer Engineering
 *     San Jose State University
 *     San Jose, CA  95192
 */
#ifndef GUITAR_H_
#define GUITAR_H_

#include <string>

using namespace std;

class Guitar
{
public:
    Guitar(string serial_number, double price,
           string builder, string model, string type,
           string back_wood, string top_wood)
    : serial_number(serial_number), builder(builder), model(model),
      type(type), back_wood(back_wood), top_wood(top_wood), price(price)
    {}

    string get_serial_number() const  { return serial_number; }
    double get_price() const          { return price; }
    void   set_price(float new_price) { price = new_price; }
    string get_builder() const        { return builder; }
    string get_model() const          { return model; }
    string get_type() const           { return type; }
    string get_back_wood() const      { return back_wood; }
    string get_top_wood() const       { return top_wood; }

private:
    string serial_number, builder, model, type, back_wood, top_wood;
    double price;
};

#endif /* GUITAR_H_ */
