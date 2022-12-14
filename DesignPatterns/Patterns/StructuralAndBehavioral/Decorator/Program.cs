using Decorator.Services;

var navigation = new BaseNavigationService();

var dec1 = new FirstDecoratedService(navigation);

//dec1.NavigateTo();

dec1.Navigate("Hello");
