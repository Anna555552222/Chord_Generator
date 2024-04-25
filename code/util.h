#include <string>
#include <utility>
#include <vector>
using namespace std;

#ifndef UTIL_DEF
#define UTIL_DEF
#define pis pair<int, string>

void print_chord(vector<string> tone, vector< pis > Chord, int i, int shift_tone);
void print_suschord(vector<string> tone, vector< pis > Chord, int i, int shift_tone, int sus_);

#endif
