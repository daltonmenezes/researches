let fibonacci_sequence = (number) => {
  f1 = -1
  f2 = 1
  counter = 0
  numbers = []

  while (counter <= number) {
        f = f1 + f2
        numbers[counter] = f
        f1 = f2
        f2 = f
        counter += 1
  }
  return numbers
}

console.log(fibonacci_sequence(10))
