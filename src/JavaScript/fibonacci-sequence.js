const fibonacciSequence = number => {
  let f1 = -1
  let f2 = 1
  let counter = 0
  let numbers = []

  while (counter <= number) {
          f = f1 + f2
          numbers[counter] = f
          f1 = f2
          f2 = f
          counter += 1
  }
  return numbers
}

console.log(
  fibonacciSequence(10)
)
