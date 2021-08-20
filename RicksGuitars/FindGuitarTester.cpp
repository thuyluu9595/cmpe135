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
#include <iostream>
#include <string>
#include "Inventory.h"

using namespace std;

void initialize_inventory(Inventory *inventory);

int main()
{
    // Set up Rick's guitar inventory.
    Inventory *inventory = new Inventory();
    initialize_inventory(inventory);

    Guitar *what_erin_likes = new Guitar("", 0, "Fender", "Stratocastor",
                                         "electric", "Alder", "Alder");
    Guitar *guitar = inventory->search(what_erin_likes);

    if (guitar != nullptr)
    {
        cout << "Erin, you might like this "
             << guitar->get_builder() << " "
             << guitar->get_model() << " "
             << guitar->get_type() << " guitar:\n   "
             << guitar->get_back_wood() << " back and sides,\n   "
             << guitar->get_top_wood() << " top.\nYou can have it for only $"
             << guitar->get_price() << "!";
    }
    else
    {
        cout << "Sorry, Erin, we have nothing for you.";
    }
}

void initialize_inventory(Inventory *inventory)
{
    inventory->add_guitar("11277", 3999.95, "Collings", "CJ", "acoustic",
                          "Indian Rosewood", "Sitka");
    inventory->add_guitar("V95693", 1499.95, "fender", "Stratocastor", "electric",
                         "Alder", "Alder");
    inventory->add_guitar("V9512", 1549.95, "fender", "Stratocastor", "electric",
                          "Alder", "Alder");
    inventory->add_guitar("122784", 5495.95, "Martin", "D-18", "acoustic",
                          "Mahogany", "Adirondack");
    inventory->add_guitar("76531", 6295.95, "Martin", "OM-28", "acoustic",
                          "Brazilian Rosewood", "Adriondack");
    inventory->add_guitar("70108276", 2295.95, "Gibson", "Les Paul", "electric",
                          "Mahogany", "Maple");
    inventory->add_guitar("82765501", 1890.95, "Gibson", "SG '61 Reissue",
                          "electric", "Mahogany", "Mahogany");
    inventory->add_guitar("77023", 6275.95, "Martin", "D-28", "acoustic",
                          "Brazilian Rosewood", "Adirondack");
    inventory->add_guitar("1092", 12995.95, "Olson", "SJ", "acoustic",
                          "Indian Rosewood", "Cedar");
    inventory->add_guitar("566-62", 8999.95, "Ryan", "Cathedral", "acoustic",
                          "Cocobolo", "Cedar");
    inventory->add_guitar("6 29584", 2100.95, "PRS", "Dave Navarro Signature",
                          "electric", "Mahogany", "Maple");
}
