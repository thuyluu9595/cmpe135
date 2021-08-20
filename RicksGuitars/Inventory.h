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
#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <vector>
#include "Guitar.h"

using namespace std;

class Inventory
{
public:
    Inventory() {}

    void add_guitar(string serial_number, double price,
                    string builder, string model, string type,
                    string back_wood, string top_wood);

    Guitar *get_guitar(const string serial_number) const;
    Guitar *search(Guitar *ideal_guitar);

private:
    vector<Guitar *> guitars;
};

#endif /* INVENTORY_H_ */
