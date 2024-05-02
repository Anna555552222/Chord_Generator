# Chord_Generator

## Introduction
在音樂創作時，我們往往需要從產生一段和弦組開始。本和弦生成器旨在為音樂創作者提供靈感，基於使用者想要的調性、和弦組數量，隨機生成符合好聽的和弦進行規範的和弦組，直到使用者滿意。

## Directions
### 和弦種類？
在音樂理論中，和弦的分類常基於它們在調式（特別是主調式）中的功能和位置。最常見的和弦類型包括主和弦（Tonic Chords）、屬和弦（Dominant Chords）、下屬和弦（Subdominant Chords）等。下面是這些和弦類型的詳細解釋:
#### 主和弦（Tonic Chords）
功能：主和弦提供音樂的「家」感，是音樂的根基和歸宿地。它通常用於開頭和結尾，以及提供穩定感和解決感的地方。
#### 屬和弦（Dominant Chords）
功能：屬和弦產生向主和弦解決的需求，它具有強烈的動力感和緊張感，通常用來建立音樂的高潮和推動音樂向前發展。
#### 下屬和弦（Subdominant Chords）
功能：下屬和弦在功能上位於主和弦和屬和弦之間，它既可以引導至屬和弦，也可以直接解決回主和弦，提供了過渡和橋樑的作用。
#### 懸掛和弦（Sus Chords 或 Suspended Chords）
是一種特殊的和弦，通常用來創造懸而未決的感覺，然後解決到更穩定的和弦上。


### 好聽的和弦進行？
根據NiceChord（好和弦）的影片「和弦有什麼功能？」
中提及好聽的和弦進行，和弦進行有三種路徑可以走，
分別是
1. Tonic Subdominant Dominant Tonic 
2. Tonic Dominant Tonic
3. Tonic Subdominant TOnic
## Manual
在terminal執行以下指令即可執行程式
### mac環境
```
g++ -std=c++11 -o chord_generator main.cpp major.cpp util.cpp
./chord_generator
```
### Windows環境
```
g++ std=c++11 -o chord_generator main.cpp major.cpp util.cpp
.\chord_generator
```
讓使用者依序輸入想要幾個和弦組合、什麼調性、是否加入特殊和弦、是否滿意。  
詳細步驟如下：  
執行之後，首先會問你需要幾組和弦進行，輸入一個整數（1~n）。  
再來會問每一個和弦進行所想要的調性，輸入一個調性（"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"）。  
接下來會問是否需要包含特殊和弦，輸入（yes/no)。  
最後詢問滿意度，輸入（yes/no）。  

## Future Plan
#### 加入不同曲風
研究不同音樂風格常出現的和弦進行方式，提供使用者選擇
流行音樂、搖滾樂、爵士樂、鄉村音樂等等
#### 讓使用者選擇和弦進行的長度
除了常見的主和弦、屬和弦、下屬和弦，還有延伸和弦可適時加入和弦進行中
，調整和弦組長度
