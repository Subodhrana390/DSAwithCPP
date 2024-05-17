/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {};

function greaterThan10(n) {
  if (n > 10) {
    return n;
  }
}

function plusOne(n) {
  n = n + 1;
  return n;
}

function firstIndex(n, i) {
  if (i == 0) return arr[i];
}

const filter = [];
for (let i = 0; i < arr.length; i++) {
  if (fn(arr[i])) {
    filter.push(arr[i]);
  }
}
return filter;
