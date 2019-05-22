const express = require("express"),
    mongoose = require("mongoose"),
    bodyParser = require("body-parser");

var app = express();

mongoose.connect("mongodb://localhost/Auth-System", { useNewUrlParser: true });
app.set('view engine', 'ejs');
app.use(bodyParser.urlencoded({extended: true}));
app.use(require("express-session")({
    secret: "secret",
    resave: false,
    saveUninitialized: false
}));

//TODO : make app.use and make different folder for diff types of routes
//routes
app.get("/", (req, res) => {
    res.send("Welcome to login system of the nodejs and mongodb");
});

//Register routes
app.get("/register", (req, res) => {
    res.render("register");
});

app.post("/register", (req, res) => {
    //TODO
});
//Login Routes
app.get("/login", (req, res) => {
    res.send("This is the login page");
});

app.post("/login", (req, res) => {
    //TODO
});

//Port no and connection status
app.listen(3000, () => {
    console.log("The server has started");
});