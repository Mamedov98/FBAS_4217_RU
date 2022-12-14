using GalaSoft.MvvmLight.Messaging;

class BaseNavigationService : NavigationService
{
    public override void NavigateTo()
    {
        Console.WriteLine("Main navigation service...");
    }
}


    



