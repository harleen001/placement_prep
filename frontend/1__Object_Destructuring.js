// Object destructuring is a syntax feature in JavaScript that allows you to extract values from an object and assign them to 
// variables in a more concise and readable way. It simplifies the process of accessing and working with values in objects.

const favouriteFilm = {
    title: "Top Gun",
    year: "1986",
    genre: "action",
    star: "Tom Cruise",
    director: "Tony Scott"
} 

const {title, year, genre, star, director} = favouriteFilm //easy way to destructure

//way to assign different variable to each value
// const title = favouriteFilm.title
// const year = favouriteFilm.year
// const genre = favouriteFilm.genre
// const star = favouriteFilm.star
// const director = favouriteFilm.director

console.log(`My favourite film is ${title} starring ${star}. It's an ${genre} film that was directed by ${director} and released in ${year}.`)

//VALUES CAN BE RENAMED ALSO
const obj = { name: 'Alice', age: 25, city: 'New York' };

const { name: fullName, age: years, city: location } = obj;

console.log(fullName);  // Output: Alice
console.log(years);     // Output: 25
console.log(location);  // Output: New York



//DESTRUCTURING IN FUNCTIONS
function greet({ name, age }) {
    console.log(`Hello, my name is ${name} and I am ${age} years old.`);
}

const person = { name: 'Bob', age: 30 };

greet(person);  // Output: Hello, my name is Bob and I am 30 years old.
//PERSON OBJECT IS USED AS PARAMATER WHICH HAS ITS OWN VALUES OF NAME AND AGE WHICH ARE REPRESENTED AS PARAMETERS IN FUNCTION