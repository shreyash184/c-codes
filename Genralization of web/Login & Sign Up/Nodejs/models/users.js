var mongoose = require("mongoose");

var UserSchema = new mongoose.Schema({
    username: String,
    password: String
});

module.exports = new mongoose.model("User", UserSchema);