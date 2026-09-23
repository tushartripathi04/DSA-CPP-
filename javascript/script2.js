
function dance(){
    console.log("hii");
    console.log("sushant");
    console.log("and saksham");
}
dance();


// fat arrow fnc
let fnc = () => {
    console.log("Hii Manas");
};
fnc();

//  variable mai save krne ko function expression kehte hai

function dance(v1){
    console.log(`${v1} dance kr rha hai`);
}
dance("ghoda");
dance("ishu");


//  add no
function add(v1,v2){
    console.log(v1+v2);
}
add(1,2)

//   
function abcd(...val){
    console.log(val);
}
abcd(1,2,3,4,5,6,7,8)