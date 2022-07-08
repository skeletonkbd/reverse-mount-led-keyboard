# リバースマウント LED3 種つけ比べキーボード

![PCB](https://user-images.githubusercontent.com/90203406/174438347-26d3f16c-3a3b-4ae2-8327-7f7f3f7393ff.jpg)

バックライトにリバースマウント可能な LED3 種類を採用したキーボード基板です。はんだ付けの難易度はかなり高めだと思います。

# BOM

| 製造元部品番号  | 種別            | 個数 |
| --------------- | --------------- | ---- |
| SK6812MINI-E    | LED             | 3    |
| SK6812D-EC3210R | LED             | 3    |
| WS2812C-2020    | LED             | 3    |
| 1N4148W         | Switching Diode | 9    |
| Pro Micro       | -               | 1    |
| TS-1136-4.3     | Switch          | 1    |

# Build Guide

## 1. 部品実装

LED の向きは以下のとおりです。

![LEDの向き](https://user-images.githubusercontent.com/90203406/177974941-47f89e48-6019-47e9-94e4-087d2e52bba4.jpg)

## 2. ファームウェアの書き込み

ファームウェアは [こちら](/firmware)をご利用ください。
