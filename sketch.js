let socket;
let sensorValue = 0;

function setup() {
  createCanvas(400, 400);
  background(220);
  value = false;

  socket = new WebSocket("ws://localhost:8765");

  socket.onopen = () => {
    console.log("Connected to Python bridge");
  };

  socket.onmessage = (event) => {
    sensorValue = Number(event.data);
  };
}

let rainbow = [
  "#ff595e",
  "#ffca3a",
  "#8ac926",
  "#1982c4"
];

let colours = [
  "#8B1E3F",
  "#3C153B",
  "#89BD9E",
  "#F0C987",
  "#DB4C40"
];

let spacing = 1;
let back = false;


function draw() {

  strokeWeight(0);

  let diameter = map(sensorValue, 0, 20000, 20, 300);

for (let i = 0; i < width; i++){
    ellipse(i*spacing,i*spacing, diameter, diameter);
    if(mouseIsPressed){fill(random(colours));}
    else{
    fill(random(rainbow));
    }
  }

  if (!back) {
    if (spacing < width) {
    spacing++;
    } else {
      back = true;
    }
  }

  if (back) {
    if (spacing > 0) {
    spacing--;
    } else {
      back = false;
    }
  }
}
