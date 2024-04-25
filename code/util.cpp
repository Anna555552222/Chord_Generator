#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include "util.h"
using namespace std;

void print_chord(vector<string> tone, vector< pis > Chord, int i, int shift_tone) {
  cout << tone[(Chord[i].first + shift_tone)%12] << Chord[i].second << " ";
}
void print_suschord(vector<string> tone, vector< pis > Chord, int i, int shift_tone, int sus_) {
  vector<string> sus = {"sus2", "sus4"};
  cout << tone[(Chord[i].first + shift_tone)%12] << Chord[i].second << sus[sus_] << " ";
}