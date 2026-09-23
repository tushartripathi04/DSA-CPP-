//  print odd numbers from 1 to 15 using a while loop
// let j =1;
// while(j<=15){
//     console.log(j);
//     j++;
// }

//  print the multiplication tableof 5 using a for loop
// for(i=1;i<=10;i++){
// console.log(`5*${i} = ${5*i}`);
// }
//  find the sum of numbers from 1 to 100 using a loop
// let sum =0;
// for(i=1;i<=100;i++){
// sum = sum+i;
// }
//  console.log(sum)

//  print all numbers between 1 to 100 that are divisible by 4

// for( let i=1;i<=100;i++){
//     if(i%4===0){
//     console.log(i);
// }
// }
// break and continue 
for(i=1;i<50;i++){
    if(i%7===0){
        continue;
}
console.log(i);
}

//  print 5 odd number
let count =0;
for(let i=1;i<50;i++){
    if(i%2===1){
        count++;
        console.log(i);
    }
    if(count===5)break;
}

