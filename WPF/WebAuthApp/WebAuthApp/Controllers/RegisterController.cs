using Microsoft.AspNetCore.Mvc;
using WebAuthApp.Models;

namespace WebAuthApp.Controllers
{
    public class RegisterController : Controller
    {
        public LoginViewModel LoginViewModel { get; set; } = new();

        public IActionResult Register()
        {
            return View();
        }

        [HttpPost]
        public IActionResult SignUp()
        {
            LoginViewModel.Username = ViewData["username"] as string;
            LoginViewModel.Password = ViewData["pasword"] as string;



            return View();
        }
    }
}
