

// var S = "Hello World"
// var result = S.replace(/\s/g, '')

// console.log(result)



// function arrayCost(N, A) {
//     var minCost = 0;

//     // Calculate initial array cost
//     for (var i = 1; i < N; i++) {
//         minCost += Math.pow(A[i] - A[i - 1], 2);
//     }

//     // Try inserting numbers between each pair and check if it reduces the cost
//     for (var i = 1; i < N - 1; i++) {
//         var newCost = minCost - Math.pow(A[i] - A[i - 1], 2) - Math.pow(A[i + 1] - A[i], 2) + Math.pow(A[i + 1] - A[i - 1], 2);
//         minCost = Math.min(minCost, newCost);
//     }

//     return minCost;
// }

// // INPUT
// var N = parseInt(readline());
// var A = readline().split(' ').map(Number);

// // OUTPUT
// console.log(arrayCost(N, A));



// function findMin(N) {
 
//     let root = Math.sqrt(N);

  
//     let nearestInteger = Math.round(root);


//     let difference = N - nearestInteger * nearestInteger;

//     return Math.abs(difference);
// }


// function solution(N,array) {

//     let result = '';

   
//     for (let i = N - 1; i >= 0; i--) {
 
//         result += array[i] + (i !== 0 ? ' ' : '');
//     }

//     return result
// }

// // Example usage:
// const N = 5;
// const myArray = [1, 2, 3, 4, 5];
// console.log(solution(N, myArray));
