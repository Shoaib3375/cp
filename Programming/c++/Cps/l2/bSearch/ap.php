<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Admin Dashboard</title>
</head>
<body>
<h2>Admin Dashboard</h2>

@if(Session::has('error'))
    <li>{{ Session::get('error') }}</li>
@endif
@if(Session::has('success'))
    <li>{{ Session::get('success') }}</li>
@endif
<a href="">Logout</a>
</body>
</html>
