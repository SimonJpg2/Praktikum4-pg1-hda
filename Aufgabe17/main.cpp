#include "herzschrittmacher.h"
#include "smartwatch.h"
#include "mensch.h"

int main()
{
    Herzschrittmacher herzschrittmacher;
    SmartWatch smartWatch;

    Mensch superman(herzschrittmacher);
    superman.setObject(&smartWatch);
    superman.gibLaut();

    return 0;
}
