const express = require("express"),
    mongoose = require("mongoose"),
    bodyParser = require("body-parser"),
    passport = require("passport"),
    User = require("./models/users"),
    LocalStrategy = require("passport-local"),
    passportLocalMongoose = require("passport-local-mongoose");

var app = express();

mongoose.connect("mongodb://localhost/Auth-System", { useNewUrlParser: true });
app.set('view engine', 'ejs');
app.use(bodyParser.urlencoded({extended: true}));
app.use(require("express-session")({
    secret: "secret",
    resave: false,
    saveUninitialized: false
}));

app.use(passport.initialize());
app.use(passport.session());

passport.use(new LocalStrategy(User.authenticate()));
passport.serializeUser(User.serializeUser());
passport.deserializeUser(User.deserializeUser());


//TODO : make app.use and make different folder for diff types of routes
//routes
app.get("/", (req, res) => {
    res.send("Welcome to login system of the nodejs and mongodb");
});

app.get("/secret", isLoggedIn, (req, res) => {
    res.render("secret");
});

//Register routes
app.get("/register", (req, res) => {
    res.render("register");
});

app.post("/register", (req, res) => {
    //TODO
    User.register(new User({username: req.body.username}), req.body.password, (err, user) => {
        if(err){
            console.log(err);
            return res.render('register');
        }
        passport.authenticate("local")(req, res, () => {
            res.redirect("/secret");
        })
    })
});
//Login Routes
app.get("/login", (req, res) => {
    res.render("login");
});

app.post('/login', passport.authenticate("local", {
    successRedirect: "/secret",
    failureRedirect: "/login"
}), (req, res) => {
    //TODO
})

//Logout routes
app.get("/logout", (req, res) => {
    req.logout();
    res.redirect("/");
})

function isLoggedIn(req, res, next){
    if(req.isAuthenticated()){
        return next();
    }
    res.redirect("/login");
}

//Port no and connection status
app.listen(3000, () => {
    console.log("The server has started");
});