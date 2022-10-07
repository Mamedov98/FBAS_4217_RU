using TaskMVP.Model;
using TaskMVP.Presenter;

namespace TaskMVP
{
    public partial class TodoView : Form
    {
        public TodoPresenter Presenter { get; set; }

        public TodoView()
        {
            Presenter = new(this);
            InitializeComponent();
        }

        private void add_button_Click(object sender, EventArgs e)
        {
            var res = Presenter.AddTask(
                name_textBox.Text,
                desc_textBox.Text,
                isImportant_checkBox.Checked,
                dateTimePicker1.Value
            );

            task_listBox.Items.Add(res);
        }

        private void task_listBox_SelectedIndexChanged(object sender, EventArgs e)
        {
        }
    }
}