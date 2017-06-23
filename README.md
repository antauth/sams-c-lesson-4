# Sams Teach Yourself C | Lesson 4 | Statements, Expressions, Operators

## Quiz

1. `x = 5 + 8` is an expression. It assigns the value of 13 to the variable x.
2. An expression is a statement that evaluates to a number.
3. In an expression that contains multiple operators, the order of operations is based on operator precedence.
4. If `x = 10`, the values of `x` and `a` after each statement are as follows
  - `a = x++;`, `a` is 10, `x` is 11
  - `a = ++x;`, `a` is 11, `x` is 11
5. `10 % 3` evaluates to 1
6. `5 + 3 * 8 / 2 + 2` evaluates to 19.
7. For the above to evaluate to 16, we could write `(5 + 3) * 8 / (2 + 2)`.
8. If an expression evaluates to false, it has a 0.
9. Higher precendence?
  - `<` higher than `==`
  - `*` higher than `+`
  - `!=` same as `==`
  - `>=` same as `>`
10. The compound assignment operators are `+=`, `*=`, `-=`, `/=`, `%=`. They are useful because they require less code, but can be understood.

## Exercises

1-3. See files in repo.

```C
// 4

if ( x > 1 && x < 20 )
  y = x;

// 5

y = ( x > 1 && x < 20) ? x : y;

// 6

if (x < 1 && x > 10)
  statement;

```

7. To what value does each expression eval?
  - `(1 + 2 * 3)` = 7
  - `10 % 3 * 3 - (1 + 2)` = 0
  - `((1 + 2) * 3)` = 9
  - `(5 == 5)` = 1
  - `(x = 5)` = 1

8. Given `x = 4`, `y = 6`, `z = 2`, determine if following evalauates to true or false
  - `if (x == 4)` T
  - `if (x != y - z)` F
  - `if (z = 1)` T
  - `if (y)` T

```C
// 9

if (age >= 21  && age < 65)
```

10. See file in repo.


 
