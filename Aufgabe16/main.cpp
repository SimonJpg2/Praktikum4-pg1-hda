#include "lebensmittel.h"
#include "fleisch.h"
#include "gemuese.h"
#include "obst.h"

int main() {
    Lebensmittel mittagessen("Mittagessen");
    Fleisch steak("Steak");
    Obst apfel("Apfel");
    Obst banane("Banane");
    Gemuese paprika("Paprika");

    mittagessen.zubereiten();
    steak.zubereiten();
    apfel.zubereiten();
    banane.zubereiten();
    paprika.zubereiten();

    steak.Lebensmittel::zubereiten();

    return 0;
}
