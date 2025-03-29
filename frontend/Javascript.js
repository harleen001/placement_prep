//TERNARY operator
//condition ? true_expression : false_expression

const exercise_time=20
// if(exercise_time>50)
// {
//     console.log("time is greater than 50");
    
// }
// else{
//     console.log("time is smaller than 50");    
// }

// exercise_time>50 ? console.log("time is greater than 50"): console.log("time is smaller than 50")


// //more than one condition
// exercise_time==50 ? console.log("time is 50"): exercise_time==40 ? console.log("time is 40"):console.log("time is neither 50 nor 40");
 

//CHALLENGE-1
const playerGuess=3
const correctAnswer=6
let message=''

//playerGuess===correctAnswer?message="Correct!":message="Wrong!"

playerGuess>correctAnswer?message="Your Guess is too high": playerGuess<correctAnswer?message="Your Guess is too low":message="Your Guess is exactly right"
console.log(message);
