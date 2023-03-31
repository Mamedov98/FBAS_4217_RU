using System.Threading.Tasks;
using System.Collections.ObjectModel;
using Microsoft.EntityFrameworkCore;

using static Ecommerce.Model.EcommerceContext;
using Ecommerce.Model;
using System.ComponentModel;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using System.Windows;
using Ecommerce.View;
using System.Linq;
using System.Windows.Controls;
using System;
using System.Reflection.Metadata;

namespace Ecommerce.ViewModel;

internal class MainViewModel : ViewModelBase, INotifyPropertyChanged
{
    private Sneaker _selectedSneaker;
    private ObservableCollection<Sneaker> sneakers = new();

    EcommerceContext context = new EcommerceContext();
    public ObservableCollection<Sneaker> Sneakers { get => sneakers; set => Set(ref sneakers, value); }

    public Photo Photo { get; set; } = new()
    {
        PhotoData = @"https://static.nike.com/a/images/t_PDP_1280_v1/f_auto,q_auto:eco/7d477a3d-bbff-446a-8ba8-7938ea779f22/air-force-1-low-retro-mens-shoes-1VHstQ.png"
    };

    public MainViewModel()
    {
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


    public Sneaker SelectedSneaker
    {
        get => _selectedSneaker;
        set
        {
            if (_selectedSneaker != value)
            {
                _selectedSneaker = value;
                RaisePropertyChanged(nameof(SelectedSneaker));
            }
        }
    }

    public RelayCommand<object> Delete
    {

        get => new(param =>
        {
            if (MessageBox.Show("Вы действительно хотите удалить?","Подвердите действие" ,MessageBoxButton.YesNo) == MessageBoxResult.Yes)
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
    // public event PropertyChangedEventHandler? PropertyChanged;
}
