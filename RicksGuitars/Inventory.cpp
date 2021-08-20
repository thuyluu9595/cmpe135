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
#include <list>
#include "Inventory.h"
#include "Guitar.h"

using namespace std;

void Inventory::add_guitar(string serial_number, double price,
                           string builder, string model, string type,
                           string back_wood, string top_wood)
{
    Guitar *guitar = new Guitar(serial_number, price, builder,
                                model, type, back_wood, top_wood);
    guitars.push_back(guitar);
}

Guitar *Inventory::get_guitar(const string serial_number) const
{
    list<Guitar *>::iterator it;

    for (Guitar *guitar : guitars)
    {
        if (guitar->get_serial_number() == serial_number) return guitar;
    }

    return nullptr;
}

Guitar *Inventory::search(Guitar *ideal_guitar)
{
    for (Guitar *guitar : guitars)
    {
        // Ignore serial number since that's unique.
        // Ignore price since that's unique.

        string builder = ideal_guitar->get_builder();
        if (builder != guitar->get_builder())  continue;

        string model = ideal_guitar->get_model();
        if (model != guitar->get_model()) continue;

        string type = ideal_guitar->get_type();
        if (type != guitar->get_type()) continue;

        string back_wood = ideal_guitar->get_back_wood();
        if (back_wood!= guitar->get_back_wood()) continue;

        string top_wood = ideal_guitar->get_top_wood();
        if (top_wood != guitar->get_top_wood()) continue;

        return guitar;
    }

    return nullptr;
}
