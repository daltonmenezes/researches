const text = str => str.toLowerCase()

const textOne = text('HELLO WORLD')
const textTwo = text('hello world')

textOne === textTwo
  ? console.log(`${textOne} and ${textTwo} are equal.`)
  : console.log(`${textOne} and ${textTwo} are different.`)
