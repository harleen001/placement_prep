function gradetocgpa(grade){
let cgpa=0
    switch(grade)
    {
        case 'O':
          cgpa=10
          break
        case 'A':
          cgpa=9
          break
        case 'B':
          cgpa=8
          break
        case 'C':
          cgpa=7
          break
        case 'D':
          cgpa=6
          break
        default:
          cgpa=5
          break 
    }
    console.log(`The CGPA is :${cgpa}` );   
}
let harleengrade='B'
console.log(gradetocgpa(harleengrade));


