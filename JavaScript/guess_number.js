const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function getNum() {
  rl.question("Guess the number from 1 - 10: ", function (num) {
    const random = Math.floor(Math.random() * 10) + 1;

    if (num == random) {
      console.log("Nice, correct number!");
      rl.close();

      rl.on("close", function () {
        console.log("BYE !!!");
        process.exit(0);
      });
    } else {
      console.log(`Wrong number, the random number is ${random}`);

      getNum();
    }
  });
}

getNum();
