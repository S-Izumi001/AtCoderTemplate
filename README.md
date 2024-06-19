# AtCoderTemplate

AtCoder C++用解答テンプレート

- ローカル環境ではGoogle testによる検証ができるように。
- 提出時は標準入力、標準出力に出せるように。
細工をしており、単体テストコードを含めたままコードをコピペして提出できる。

え？インタラクティブ方式？そういうのもありますね。太刀打ちできないので未対応です。

## 大まかな流れ

1. handleInputで入力をすべて受け取る。
2. solvマクロに出力すべきナニかを出すコードを書く。 (ex: `ans(N, A, B)`)
3. 実際に回答を得るためのコードを書く。
4. テストコードを書く。
5. テスト＆デバッグ!

## example 

[A. Frog 1](https://atcoder.jp/contests/dp/submissions/54679358)
[D - ±1 Operation 2](https://atcoder.jp/contests/abc255/submissions/54695859)
