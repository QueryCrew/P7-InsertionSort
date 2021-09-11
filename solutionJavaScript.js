//Insertion sort function
const insertionSort = function (arr) {
  //Loop through array
  for (let i = 1; i < arr.length; i++) {
    //loop through array backwards from i
    for (let j = i; j > 0; j--) {
      //check if previous element is greater. if yes swap values
      if (arr[j] < arr[j - 1]) [arr[j], arr[j - 1]] = [arr[j - 1], arr[j]];
    }
  }
  // Return sorted array
  return arr;
};

//input
arr = [5, 3, 7, 1, 8, 6, 9];
console.log(insertionSort(arr));
