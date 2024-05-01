# Chord_Generator

## Introduction
在音樂創作時，我們往往需要從產生一段和弦組開始。本和弦生成器旨在為音樂創作者提供靈感，基於使用者想要的調性、和弦組數量，隨機生成符合好聽的和弦進行規範的和弦組，直到使用者滿意。

## Implementation
### Interact With Users
讓使用者依序輸入想要幾個和弦組合、什麼調性、是否加入特殊和弦、是否滿意。
### Function
定義一個major函數，包含所有調性，會隨機選擇路徑與和弦。
為了簡化輸出，定義print_chord與print_suschord函數，此major函數會根據隨機路徑生成一組和弦進行。

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

## Future Plan
#### 加入不同曲風
研究不同音樂風格常出現的和弦進行方式，提供使用者選擇
流行音樂、搖滾樂、爵士樂、鄉村音樂等等
#### 讓使用者選擇和弦進行的長度
除了常見的主和弦、屬和弦、下屬和弦，還有延伸和弦可適時加入和弦進行中
，調整和弦組長度
