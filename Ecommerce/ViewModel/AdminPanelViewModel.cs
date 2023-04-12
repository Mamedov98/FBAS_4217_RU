using Ecommerce.Model;
using Ecommerce.Services.Interfaces;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using UserEcommerceApp.Message;
using static Ecommerce.Model.EcommerceContext;

namespace Ecommerce.ViewModel
{
    internal class AdminPanelViewModel : ViewModelBase
    {

        private Sneaker _selectedSneaker;
        private readonly INavigationService _navigationService;
        private ObservableCollection<Sneaker> sneakers = new();




        public AdminPanelViewModel(INavigationService navigationService)
        {
            EcommerceContext context = new EcommerceContext();
            _navigationService = navigationService;
            Task.Run(async () =>
            {


                using (var context = new EcommerceContext())
                {
                    // Создаем бренд и добавляем в контекст
                    var brand = new Brand { Name = "Nike" };
                    context.brands.Add(brand);
                    await context.SaveChangesAsync();
                    // Создаем кроссовки и добавляем в контекст
                    var sneaker = new Sneaker
                    {
                        Name = "Air Force",
                        BrandId = brand.Id, // указываем связанный бренд
                        Price = 120m
                    };
                    context.sneakers.Add(sneaker);

                    //Сохраняем изменения в базе данных
                    await context.SaveChangesAsync();
                    var sneakersList = await context.sneakers.ToListAsync();
                    Sneakers = new ObservableCollection<Sneaker>(sneakersList);
                }

            });




        }

    

        public ObservableCollection<Sneaker> Sneakers { get => sneakers; set => Set(ref sneakers, value); }

        public Photo Photo { get; set; } = new()
        {
            PhotoData = @"https://static.nike.com/a/images/t_PDP_1280_v1/f_auto,q_auto:eco/7d477a3d-bbff-446a-8ba8-7938ea779f22/air-force-1-low-retro-mens-shoes-1VHstQ.png"
        };



        public RelayCommand<object> Delete
        {

            get => new(param =>
            {
                if (MessageBox.Show("Вы действительно хотите удалить?", "Подтвердите действие", MessageBoxButton.YesNo) == MessageBoxResult.Yes)
                {


                    using (var context = new EcommerceContext())
                    {

                        var selected = context.sneakers.Find(param);

                        Sneakers.Remove(Sneakers.First(x => x.Id == (int)param));

                        context.sneakers.Remove(selected);
                        context.SaveChanges();
                    }
                }
            });
        }

        public RelayCommand<object> EditPage
        {
            get => new(param =>
            {
              
                using (var context = new EcommerceContext())
                {

                    var selected = context.sneakers.Find(param);


                }
                _navigationService.NavigateTo<EditPageModel>(new ParameterMessage() { Message = (ISendable)_selectedSneaker }  ); ; 


            });

            // public event PropertyChangedEventHandler? PropertyChanged;
        }
    }
}
