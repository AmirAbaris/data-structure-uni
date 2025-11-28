// i am more comfortable with javascript than typescript for hash logics and map

const map = new Map<string, number>();

const items = [
  { name: "apple", price: 10 },
  { name: "banana", price: 20 },
  { name: "cherry", price: 30 },
];

for (const item of items) {
  map.set(item.name, item.price);
}

console.log(map.get("apple"));

// search example
for (const item of items) {
  if (map.get(item.name) === 10) {
    console.log(item.name);
  }
}
