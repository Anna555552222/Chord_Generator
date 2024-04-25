#include <iostream>
#include <random>
#include <string>
#include <vector>
#include <utility>
#include "major.h"
#include "util.h"
using namespace std;


void major(string tone_, string special) {
  int shift_tone = 0;
  vector<string> tone = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
  for (int i = 0; i < tone.size(); i++) {
    if (tone[i] == tone_) {
      shift_tone = i;
    }
  }
  vector< pis > tonicChord = {mp(0, ""), mp(0, "7")};
  vector< pis > dominantChord = {mp(7, ""), mp(11, "dim"), mp(7, "7"), mp(11, "dim7")};
  vector< pis > subdominantChord = {mp(2,""), mp(5,""), mp(2, "7"), mp(5, "7")};
  vector< pis > susChords = {mp(0,"sus4"), mp(2,"sus4"), mp(4,"sus4"), mp(5,"sus4"),mp(7,"sus4"),mp(9,"sus4"),mp(11,"sus4"),mp(0,"sus2"), mp(2,"sus2"), mp(4,"sus2"), mp(5,"sus2"),mp(7,"sus2"),mp(9,"sus2"),mp(11,"sus2")};


  random_device rd;
  mt19937 gen(rd());

  int path_ = gen() % 3;
  int tonic_ = gen() % 2;
  int tonic2_ = gen() % 2;
  int dominant_ = gen() % 4;
  int subdominant_ = gen() % 4;
  int sus_ = gen() % 2;

  //依照主、屬、下屬 產生一組好聽的C大調和弦
  if (special == "no") {
    vector<string> path = {"tonic subdominant dominant tonic",
                           "tonic dominant tonic", "tonic subdominant tonic"};
    if (path_ == 0) {
      print_chord(tone, tonicChord, tonic_, shift_tone);
      print_chord(tone, subdominantChord, subdominant_, shift_tone);
      print_chord(tone, dominantChord, dominant_, shift_tone);
      print_chord(tone, tonicChord, tonic2_, shift_tone);
      cout << "\n";
      /*
      cout << tone[(tonicChord[tonic_].first + shift_tone)%12] << tonicChord[tonic_].second << " " << tone[(subdominantChord[subdominant_].first + shift_tone)%12] << subdominantChord[subdominant_].second << " "
           << tone[(dominantChord[dominant_].first+shift_tone)%12] << dominantChord[dominant_].second<<" " << tone[(tonicChord[tonic2_].first+shift_tone)%12] <<tonicChord[tonic_].second<< "\n";*/
    } else if (path_ == 1) {
      print_chord(tone, tonicChord, tonic_, shift_tone);
      //print_chord(tone, subdominantChord, subdominant_, shift_tone);
      print_chord(tone, dominantChord, dominant_, shift_tone);
      print_chord(tone, tonicChord, tonic2_, shift_tone);
      cout << "\n";
      /*
      cout << tone[(tonicChord[tonic_].first+shift_tone)%12] <<tonicChord[tonic_].second<< " " << tone[(dominantChord[dominant_].first+shift_tone)%12] << dominantChord[dominant_].second<<" "
           << tone[(tonicChord[tonic2_].first+shift_tone%12)] <<tonicChord[tonic_] .second<<"\n";*/
    } else {
      print_chord(tone, tonicChord, tonic_, shift_tone);
      print_chord(tone, subdominantChord, subdominant_, shift_tone);
      //print_chord(tone, dominantChord, dominant_, shift_tone);
      print_chord(tone, tonicChord, tonic2_, shift_tone);
      cout << "\n";
      /*
      cout << tonicChord[tonic_] << " " << subdominantChord[subdominant_] << " "
           << tonicChord[tonic2_] << "\n";*/
    }
  } 
  else {
    vector<string> path = {"tonic sus dominant tonic", "tonic sus tonic",
                           "tonic sus subdominant tonic"};
    if (path_ == 0) {
      print_chord(tone, tonicChord, tonic_, shift_tone);
      print_suschord(tone, subdominantChord, subdominant_, shift_tone, sus_);
      print_chord(tone, dominantChord, dominant_, shift_tone);
      print_chord(tone, tonicChord, tonic2_, shift_tone);
      cout << "\n";
      /*
      cout << tone[(tonicChord[tonic_].first + shift_tone)%12] << tonicChord[tonic_].second << " " << tone[(subdominantChord[subdominant_].first + shift_tone)%12] << subdominantChord[subdominant_].second << " "
           << tone[(dominantChord[dominant_].first+shift_tone)%12] << dominantChord[dominant_].second<<" " << tone[(tonicChord[tonic2_].first+shift_tone)%12] <<tonicChord[tonic_].second<< "\n";*/
    } else if (path_ == 1) {
      print_chord(tone, tonicChord, tonic_, shift_tone);
      //print_chord(tone, subdominantChord, subdominant_, shift_tone);
      print_suschord(tone, dominantChord, dominant_, shift_tone, sus_);
      print_chord(tone, tonicChord, tonic2_, shift_tone);
      cout << "\n";
      /*
      cout << tone[(tonicChord[tonic_].first+shift_tone)%12] <<tonicChord[tonic_].second<< " " << tone[(dominantChord[dominant_].first+shift_tone)%12] << dominantChord[dominant_].second<<" "
           << tone[(tonicChord[tonic2_].first+shift_tone%12)] <<tonicChord[tonic_] .second<<"\n";*/
    } else {
      print_chord(tone, tonicChord, tonic_, shift_tone);
      print_suschord(tone, subdominantChord, subdominant_, shift_tone, sus_);
      print_chord(tone, subdominantChord, subdominant_, shift_tone);
      print_chord(tone, tonicChord, tonic2_, shift_tone);
      cout << "\n";
      /*
      cout << tonicChord[tonic_] << " " << subdominantChord[subdominant_] << " "
           << tonicChord[tonic2_] << "\n";*/
    }
  }
}
